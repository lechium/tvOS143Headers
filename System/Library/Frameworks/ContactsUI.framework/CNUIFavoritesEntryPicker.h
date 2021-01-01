/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactActionsViewControllerDelegate.h>

@protocol CNUIFavoritesEntryPickerDelegate;
@class CNContact, UIAlertController, NSString;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsViewControllerDelegate> {

	id<CNUIFavoritesEntryPickerDelegate> _delegate;
	CNContact* _contact;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIFavoritesEntryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id<CNUIFavoritesEntryPickerDelegate>)delegate;
-(void)setDelegate:(id<CNUIFavoritesEntryPickerDelegate>)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(id)viewController;
-(void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
@end
