/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PK3DLiveCardViewDelegate.h>

@class PKPass, PK3DCardView, UIImageView;

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate> {

	PKPass* _pass;
	PK3DCardView* _cardView;
	UIImageView* _logoImageView;
	BOOL _invalidated;

}
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)sceneDidRenderAtTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
@end

