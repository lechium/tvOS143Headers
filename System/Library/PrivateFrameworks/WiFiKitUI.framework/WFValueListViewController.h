/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKitUI/WFInsetTableViewController.h>

@class NSString, NSArray, UISwitch, NSMutableArray;

@interface WFValueListViewController : WFInsetTableViewController {

	BOOL _switchOn;
	BOOL _hasSwitch;
	NSString* _selectedTitle;
	/*^block*/id _completionHandler;
	/*^block*/id _footerHandler;
	NSArray* _titles;
	UISwitch* _configSwitch;
	NSMutableArray* _sections;
	NSString* _switchTitle;

}

@property (nonatomic,retain) NSArray * titles;                       //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) BOOL hasSwitch;                         //@synthesize hasSwitch=_hasSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * configSwitch;                //@synthesize configSwitch=_configSwitch - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * switchTitle;                   //@synthesize switchTitle=_switchTitle - In the implementation block
@property (nonatomic,retain) NSString * selectedTitle;               //@synthesize selectedTitle=_selectedTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id footerHandler;                         //@synthesize footerHandler=_footerHandler - In the implementation block
@property (assign,nonatomic) BOOL switchOn;                          //@synthesize switchOn=_switchOn - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSMutableArray *)sections;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSArray *)titles;
-(void)setTitles:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithTitles:(id)arg1 switchTitle:(id)arg2 ;
-(void)setSelectedTitle:(NSString *)arg1 ;
-(void)setFooterHandler:(id)arg1 ;
-(NSString *)selectedTitle;
-(UISwitch *)configSwitch;
-(NSString *)switchTitle;
-(id)cellForTitleAtIndexPath:(id)arg1 ;
-(id)footerHandler;
-(BOOL)switchOn;
-(void)setSwitchOn:(BOOL)arg1 ;
-(BOOL)hasSwitch;
-(void)setHasSwitch:(BOOL)arg1 ;
-(void)setConfigSwitch:(UISwitch *)arg1 ;
-(void)setSwitchTitle:(NSString *)arg1 ;
@end
