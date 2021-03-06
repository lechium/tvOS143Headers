/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PKCredentialPairingExplanationHeaderView : UIView {

	UIImageView* _imageView;
	BOOL _useCompactLayout;

}

@property (assign,nonatomic) BOOL useCompactLayout;              //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(id)pairingImage;
@end

