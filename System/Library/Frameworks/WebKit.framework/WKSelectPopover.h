/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class UITableViewController;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKSelectTableViewController>* _tableViewController;

}

@property (nonatomic,readonly) UITableViewController * tableViewController; 
-(void)dealloc;
-(UITableViewController *)tableViewController;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithView:(id)arg1 hasGroups:(BOOL)arg2 ;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
-(void)_userActionDismissedPopover:(id)arg1 ;
@end
