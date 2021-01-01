/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>

@class KenBurnsInfo, PVEffect;

@interface IrisMovieClip : MovieClip {

	BOOL _front;
	KenBurnsInfo* _kenBurnsInfo;
	PVEffect* _kenBurnsEffect;

}

@property (assign,getter=isFront,nonatomic) BOOL front;                //@synthesize front=_front - In the implementation block
@property (nonatomic,retain) KenBurnsInfo * kenBurnsInfo;              //@synthesize kenBurnsInfo=_kenBurnsInfo - In the implementation block
@property (nonatomic,retain) PVEffect * kenBurnsEffect;                //@synthesize kenBurnsEffect=_kenBurnsEffect - In the implementation block
+(id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(BOOL)isFront;
-(int)maxDuration;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(void)validateEffectRange:(SCD_Struct_VE9)arg1 inProject:(id)arg2 ;
-(void)setFront:(BOOL)arg1 ;
-(PVEffect *)kenBurnsEffect;
-(void)setKenBurnsEffect:(PVEffect *)arg1 ;
-(KenBurnsInfo *)kenBurnsInfo;
-(void)setKenBurnsInfo:(KenBurnsInfo *)arg1 ;
@end

