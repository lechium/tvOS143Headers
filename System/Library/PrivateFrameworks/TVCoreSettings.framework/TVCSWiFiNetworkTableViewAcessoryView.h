/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCoreSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIActivityIndicatorView;

@interface TVCSWiFiNetworkTableViewAcessoryView : UIView {

	UIImageView* _padlockView;
	UIImageView* _signalStrengthView;
	UIImageView* _disclosureView;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,readonly) UIImageView * padlockView;                          //@synthesize padlockView=_padlockView - In the implementation block
@property (nonatomic,readonly) UIImageView * signalStrengthView;                   //@synthesize signalStrengthView=_signalStrengthView - In the implementation block
@property (nonatomic,readonly) UIImageView * disclosureView;                       //@synthesize disclosureView=_disclosureView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinnerView;
-(UIImageView *)disclosureView;
-(UIImageView *)signalStrengthView;
-(UIImageView *)padlockView;
@end

