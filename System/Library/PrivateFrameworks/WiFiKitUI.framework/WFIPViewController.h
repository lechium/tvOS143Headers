/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKitUI/WFInsetTableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface WFIPViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _useInsetGroupedTableView;
	NSArray* _addresses;
	NSArray* _prefixes;

}

@property (nonatomic,retain) NSArray * addresses;                        //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,retain) NSArray * prefixes;                         //@synthesize prefixes=_prefixes - In the implementation block
@property (assign,nonatomic) BOOL useInsetGroupedTableView;              //@synthesize useInsetGroupedTableView=_useInsetGroupedTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)addresses;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)prefixes;
-(void)viewDidLoad;
-(void)setAddresses:(NSArray *)arg1 ;
-(BOOL)useInsetGroupedTableView;
-(void)setUseInsetGroupedTableView:(BOOL)arg1 ;
-(id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 useInsetGroupedTableView:(BOOL)arg3 ;
-(id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 ;
-(void)setPrefixes:(NSArray *)arg1 ;
@end

