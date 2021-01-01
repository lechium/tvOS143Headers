/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNUIDataCollectorLogger, NSString;

@interface CNUIDataCollector : NSObject {

	CNUIDataCollectorLogger* _logger;
	NSString* _appIdentifier;

}

@property (nonatomic,retain) CNUIDataCollectorLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier;                      //@synthesize appIdentifier=_appIdentifier - In the implementation block
+(BOOL)isEnabled;
+(id)sharedCollector;
-(id)init;
-(CNUIDataCollectorLogger *)logger;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)logContactActionType:(id)arg1 attributes:(id)arg2 ;
-(void)logIndexUsage;
-(void)logAddProperty:(id)arg1 contact:(id)arg2 ;
-(void)logPresentation;
-(void)_reallyLogIndexUsage;
-(void)logSearchUsage;
-(void)logSearchResultsFetchedSuggested:(BOOL)arg1 ;
-(void)logSearchResultSelectedSuggested:(BOOL)arg1 ;
-(void)logRefreshUsage;
-(void)logGroupsShown:(long long)arg1 totalGroups:(long long)arg2 ;
-(void)setLogger:(CNUIDataCollectorLogger *)arg1 ;
@end
