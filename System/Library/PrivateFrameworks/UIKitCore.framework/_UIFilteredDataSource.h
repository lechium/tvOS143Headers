/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITableViewDataSource.h>

@protocol UITableViewDataSource;
@class NSString;

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {

	BOOL _limitingWithSections;
	long long _maxVisibleSection;
	long long _numberOfVisibleItemsInLastSection;
	long long _filterType;
	id<UITableViewDataSource> _tableDataSource;

}

@property (assign,nonatomic) long long filterType;                                   //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) id<UITableViewDataSource> tableDataSource;              //@synthesize tableDataSource=_tableDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableDataSource:(id<UITableViewDataSource>)arg1 ;
-(id<UITableViewDataSource>)tableDataSource;
-(long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2 ;
@end

