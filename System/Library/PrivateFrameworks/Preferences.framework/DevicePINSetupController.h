/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController {

	BOOL _success;
	BOOL _allowOptionsButton;

}

@property (assign,nonatomic) BOOL allowOptionsButton;              //@synthesize allowOptionsButton=_allowOptionsButton - In the implementation block
-(id)init;
-(BOOL)success;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)setAllowOptionsButton:(BOOL)arg1 ;
-(BOOL)allowOptionsButton;
-(CGSize)preferredContentSize;
@end

