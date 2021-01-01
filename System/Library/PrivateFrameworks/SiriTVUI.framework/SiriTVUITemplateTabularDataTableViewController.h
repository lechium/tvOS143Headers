/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItemViewController.h>
#import <SiriTVUI/SiriTVUITemplateItemViewControllerDelegate.h>
#import <SiriTVUI/SiriTVUITemplateTabularDataTableViewLayoutDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class SiriTVUITabularDataRowCell, NSMutableDictionary, NSArray, SiriTVUITabularDataRow, SiriTVUITemplateTabularDataTableView, SiriTVUITabularDataTableViewTemplateItem, NSString;

@interface SiriTVUITemplateTabularDataTableViewController : SiriTVUITemplateItemViewController <SiriTVUITemplateItemViewControllerDelegate, SiriTVUITemplateTabularDataTableViewLayoutDelegate, UITableViewDataSource, UITableViewDelegate> {

	SiriTVUITabularDataRowCell* _headerCell;
	NSMutableDictionary* _cellItemViewControllers;
	NSArray* _cellColumnWidths;
	NSArray* _cellRowHeights;
	NSMutableDictionary* _imageCacheByURL;
	SiriTVUITabularDataRow* _focusedRow;

}

@property (nonatomic,retain) SiriTVUITemplateTabularDataTableView * view; 
@property (nonatomic,retain) SiriTVUITabularDataTableViewTemplateItem * templateItem; 
@property (nonatomic,readonly) double fullScreenFraction; 
@property (nonatomic,readonly) UIEdgeInsets contentMargins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)contentMargins;
-(BOOL)supportsSwipeDismissal;
-(double)fullScreenFraction;
-(void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2 ;
-(id)initWithTemplateItem:(id)arg1 delegate:(id)arg2 ;
-(void)_calculateLayout;
-(void)_updateForUserInterfaceStyle:(long long)arg1 andReloadVisibleRows:(BOOL)arg2 ;
-(void)_configureCell:(id)arg1 forDataRow:(id)arg2 cellForLoadedImageCompletion:(/*^block*/id)arg3 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 inTableView:(id)arg3 ;
-(double)contentWidthForTabularDataTableView:(id)arg1 ;
@end

