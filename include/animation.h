#ifndef GUARD_ANIMATION_H
#define GUARD_ANIMATION_H
#include "background.h"
#include "utils.h"

#define ANIM_DESTROY 0xFD
#define ANIM_STOP 0xFE
#define ANIM_LOOP 0xFF

#define ANIM_ENABLE_XFLIP	0x1
#define ANIM_ENABLE_ROTATION	0x100000
#define ANIM_QUEUED_PAL_UPLOAD	0x1000000
#define ANIM_BLEND_ACTIVE	0x2000000
#define ANIM_INACTIVE		0x8000000
#define ANIM_ALLOCATED		0x10000000
#define ANIM_ACTIVE		0x20000000
#define ANIM_QUEUED_TILE_UPLOAD	0x40000000
// called HasMove in unity, set when PlayAnimation() is called
#define ANIM_PLAYING		0x80000000

struct AnimationFrame
{
    /* +0x00 */ u16 spriteDataOffset;
    /* +0x02 */ u8 frameDuration;
    /* +0x03 */ u8 flags;
    /* +0x04 */ u8 songId;
    /* +0x05 */ u8 action;
    /* +0x06 */ u8 filler6[2];
};

struct AnimationInfo
{
    /* +0x00 */ u16 animId;
    /* +0x02 */ u8 personId;
    /* +0x03 */ u8 filler3; // padding?
    /* +0x04 */ s16 xOrigin;
    /* +0x06 */ s16 yOrigin;
    /* +0x08 */ u8 *volatile animFrameDataStartPtr; // !! THESE 4 POINTERS ARE VOLATILE TO MATCH MoveAnimationTilesToRam AND THAT COULD BE INCORRECT
    /* +0x0C */ u8 *volatile tileDataPtr;
    /* +0x10 */ u8 *volatile vramPtr;
    /* +0x14 */ u8 *volatile animGfxDataStartPtr;
    /* +0x18 */ u8 paletteSlot;
    /* +0x19 */ u8 spriteCount;
    /* +0x1A */ u8 priority;
    /* +0x1B */ u8 filler1B;
};

struct SpriteTemplate {
    /* +0x00 */ s8 x;
    /* +0x01 */ s8 y;
    /* +0x02 */ u16 data;
};

struct AnimationListEntry
{
    /* +0x00 */ s32 flags;
    /* +0x04 */ struct AnimationListEntry * prev;
    /* +0x08 */ struct AnimationListEntry * next;
    /* +0x0C */ struct AnimationInfo animationInfo;
    /* +0x28 */ s16 frameDurationCounter;
    /* +0x2A */ u8 animVar0;
    /* +0x2B */ u8 animVar1;
    /* +0x2C */ u8 bgId;
    /* +0x2D */ u8 roomId;
    /* +0x2E */ s16 specialEffectVar;
    /* +0x30 */ struct SpriteTemplate * spriteData;
    /* +0x34 */ struct AnimationFrame * frameData;
    /* +0x38 */ u16 tileNum;
    /* +0x3A */ u8 animtionOamStartIdx;
    /* +0x3B */ u8 animtionOamEndIdx;
    /* +0x3C */ s16 rotationAmount;
    /* +0x3E */ u16 spritePriorityMatrixIndex; // ! this name sucks :(
};

struct AnimationBackupStruct
{
    /* +0x00 */ u16 animId;
    /* +0x02 */ u8 personId;
    /* +0x03 */ u8 filler3; // animationInfo.filler3
    /* +0x04 */ s16 xOrigin;
    /* +0x06 */ s16 yOrigin;
    /* +0x08 */ u8 * animFrameDataStartPtr;
    /* +0x0C */ u16 frameDurationCounter;
    /* +0x0E */ u8 animVar0;
    /* +0x0F */ u8 animVar1;
    /* +0x10 */ u8 bgId;
    /* +0x11 */ u8 roomId;
    /* +0x12 */ u16 specialEffectVar;
    /* +0x14 */ u32 flags;
    /* +0x18 */ struct AnimationFrame * frameData;
};

struct PersonAnimationData
{
    /* +0x00 */ u8* gfxData;
    /* +0x04 */ u8* frameData;
    /* +0x08 */ u16 spriteCount;
    /* +0x0A */ u16 fillerA; // padding?
};

struct AnimationData
{
    /* +0x00 */ u8* gfxData;
    /* +0x04 */ u8* vramPtr;
    /* +0x08 */ u8* frameData;
    /* +0x0C */ s16 xOrigin;
    /* +0x0E */ s16 yOrigin;
    /* +0x10 */ u8 paletteSlot;
    /* +0x11 */ u8 spriteCount;
    /* +0x12 */ u8 priority; // first nibble animation priority(?) second nibble sprite priority
    /* +0x13 */ u8 flags;
};

struct SpriteSizeData {
    /* +0x00 */ u16 tileSize;
    /* +0x02 */ u8 height;
    /* +0x03 */ u8 width;
};

extern struct AnimationListEntry gAnimation[32];

void SpeechBubbleAnimationEffect(struct AnimationListEntry *);
void Case3OpeningAnimationEffect(struct AnimationListEntry *);

void ScrollMode0AnimationUpdate(struct AnimationListEntry *, struct CourtScroll *);
void ScrollMode1AnimationUpdate(struct AnimationListEntry *, struct CourtScroll *);
void ScrollMode2AnimationUpdate(struct AnimationListEntry *, struct CourtScroll *);
void ScrollMode3AnimationUpdate(struct AnimationListEntry *, struct CourtScroll *);
void ScrollMode4AnimationUpdate(struct AnimationListEntry *, struct CourtScroll *);
void ScrollMode5AnimationUpdate(struct AnimationListEntry *, struct CourtScroll *);

void ResetAnimationSystem();
void ClearAllAnimationSprites();
struct AnimationListEntry * FindAnimationFromAnimId(u32 animId);
void SetAnimationOriginCoords(struct AnimationListEntry *animation, u32 xOrigin, u32 yOrigin);
void SetAnimationRotation(struct AnimationListEntry *animation, u32 rotscaleIdx, u32 rotation);
void DisableAnimationRotation(struct AnimationListEntry *animation);
void ChangeAnimationActivity(struct AnimationListEntry *animation, bool32 arg1);
void SetAnimationXFlip(struct AnimationListEntry *animation, bool32 flipX);
void SetAnimationPriority(struct AnimationListEntry* arg0, u32 arg1);
void SetAnimationFrameOffset(struct AnimationListEntry *, u32);

struct AnimationListEntry * PlayPersonAnimation(u32 arg0, u32 arg1, u32 talkingAnimOff, u32 arg3);
struct AnimationListEntry * PlayPersonAnimationAtCustomOrigin(u32 arg0, u32 talkingAnimOff, u32 xOrigin, u32 yOrigin, u32 arg4);
struct AnimationListEntry * PlayAnimation(u32 arg0);
struct AnimationListEntry * PlayAnimationAtCustomOrigin(u32 arg0, s32 xOrigin, s32 yOrigin);
struct AnimationBackupStruct * RestoreAnimationsFromBuffer(struct AnimationBackupStruct * ewStruct2650); // ! does not return a value UB
struct AnimationBackupStruct * SaveAnimationDataToBuffer(struct AnimationBackupStruct * ewStruct2650);

u32 CheckRectCollisionWithAnim(struct Rect *);

void OffsetAllAnimations(s32 xOffset, s32 yOffset);
void StartAnimationBlend(u32 arg0, u32 arg1);
void DestroyAnimation(struct AnimationListEntry * animation);
void MoveAnimationTilesToRam(bool32 arg0);
void UpdateAnimations(u32 arg0);
void SetCourtScrollPersonAnim(u32 arg0, u32 arg1, u32 arg2, u32 arg3);

#endif//GUARD_ANIMATION_H