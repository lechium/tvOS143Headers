/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSKeychainSyncViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIFont, NSString;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {

	double _cellTextWidth;
	UIFont* _cellFont;
	BOOL _showsDisableRecoveryOption;

}

@property (assign,nonatomic) BOOL showsDisableRecoveryOption;              //@synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
-(void)nextPressed;
-(void)setShowsDisableRecoveryOption:(BOOL)arg1 ;
-(void)_finishedWithSpecifier:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)showsDisableRecoveryOption;
@end

