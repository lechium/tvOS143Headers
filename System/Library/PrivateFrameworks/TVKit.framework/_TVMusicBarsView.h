/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVMusicBarsView : UIView {

	NSArray* _barViews;
	float _repeatCount;
	unsigned long long _musicBarsStyle;

}

@property (assign,nonatomic) unsigned long long musicBarsStyle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_addAnimations;
-(void)_removeAnimations;
-(id)_createBarViews;
-(void)setMusicBarsStyle:(unsigned long long)arg1 ;
-(void)_addAnimationsWithRepeatCount:(float)arg1 ;
-(void)_setBarHeights:(double)arg1 ;
-(void)_updateMusicBarsStyle;
-(unsigned long long)musicBarsStyle;
-(void)resumeAnimating;
@end
