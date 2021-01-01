/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGAnimator, PXGLayout;

@interface PXGAnimatorLayout : NSObject {

	PXGAnimator* _animator;
	PXGLayout* _inputLayout;

}

@property (nonatomic,__weak,readonly) PXGAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) PXGLayout * inputLayout;                      //@synthesize inputLayout=_inputLayout - In the implementation block
-(id)init;
-(CGRect)visibleRect;
-(PXGAnimator *)animator;
-(CGSize)contentSize;
-(void)setInputLayout:(PXGLayout *)arg1 ;
-(unsigned)numberOfSprites;
-(id)initWithAnimator:(id)arg1 ;
-(CGSize)referenceSize;
-(void)enumerateDescendantsLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateLayoutsForSpritesInRange:(PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)fences;
-(void)removeAllFences;
-(BOOL)isSpriteIndex:(unsigned)arg1 decoratingSpriteWithIndex:(out unsigned*)arg2 ;
-(id)rootLayout;
-(PXGLayout *)inputLayout;
@end
