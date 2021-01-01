/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBDailyStatusEvent : PBCodable <NSCopying> {

	unsigned _appComplicationSlotsUsed;
	unsigned _appSessionCount;
	NSString* _automationSuggestionsTrialIdentifier;
	unsigned _averageShortcutCountPerFolder;
	unsigned _folderCount;
	NSString* _key;
	unsigned _numberOfLargeWidgets;
	unsigned _numberOfMediumWidgets;
	unsigned _numberOfPersonalAutomationsEnabled;
	unsigned _numberOfPersonalAutomationsFromSuggestionsEnabled;
	unsigned _numberOfSmallWidgets;
	unsigned _numberOfSuggestedAutomationsGenerated;
	unsigned _numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
	unsigned _numberOfWidgetsOnHomeScreen;
	unsigned _numberOfWidgetsOnLoL;
	unsigned _shortcutComplicationSlotsUsed;
	unsigned _shortcutRunCount;
	unsigned _shortcutsCount;
	unsigned _sleepShortcutsCount;
	unsigned _uncategorizedShortcutCount;
	unsigned _watchShortcutCount;
	BOOL _homeAutomationsEnabled;
	BOOL _installed;
	BOOL _personalAutomationsEnabled;
	BOOL _sharingEnabled;
	BOOL _sleepEnabled;
	SCD_Struct_WF15 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                                            //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasInstalled; 
@property (assign,nonatomic) BOOL installed;                                                            //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL hasSharingEnabled; 
@property (assign,nonatomic) BOOL sharingEnabled;                                                       //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalAutomationsEnabled; 
@property (assign,nonatomic) BOOL personalAutomationsEnabled;                                           //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHomeAutomationsEnabled; 
@property (assign,nonatomic) BOOL homeAutomationsEnabled;                                               //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasShortcutComplicationSlotsUsed; 
@property (assign,nonatomic) unsigned shortcutComplicationSlotsUsed;                                    //@synthesize shortcutComplicationSlotsUsed=_shortcutComplicationSlotsUsed - In the implementation block
@property (assign,nonatomic) BOOL hasAppComplicationSlotsUsed; 
@property (assign,nonatomic) unsigned appComplicationSlotsUsed;                                         //@synthesize appComplicationSlotsUsed=_appComplicationSlotsUsed - In the implementation block
@property (assign,nonatomic) BOOL hasSleepEnabled; 
@property (assign,nonatomic) BOOL sleepEnabled;                                                         //@synthesize sleepEnabled=_sleepEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasShortcutsCount; 
@property (assign,nonatomic) unsigned shortcutsCount;                                                   //@synthesize shortcutsCount=_shortcutsCount - In the implementation block
@property (assign,nonatomic) BOOL hasFolderCount; 
@property (assign,nonatomic) unsigned folderCount;                                                      //@synthesize folderCount=_folderCount - In the implementation block
@property (assign,nonatomic) BOOL hasAverageShortcutCountPerFolder; 
@property (assign,nonatomic) unsigned averageShortcutCountPerFolder;                                    //@synthesize averageShortcutCountPerFolder=_averageShortcutCountPerFolder - In the implementation block
@property (assign,nonatomic) BOOL hasUncategorizedShortcutCount; 
@property (assign,nonatomic) unsigned uncategorizedShortcutCount;                                       //@synthesize uncategorizedShortcutCount=_uncategorizedShortcutCount - In the implementation block
@property (assign,nonatomic) BOOL hasShortcutRunCount; 
@property (assign,nonatomic) unsigned shortcutRunCount;                                                 //@synthesize shortcutRunCount=_shortcutRunCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppSessionCount; 
@property (assign,nonatomic) unsigned appSessionCount;                                                  //@synthesize appSessionCount=_appSessionCount - In the implementation block
@property (assign,nonatomic) BOOL hasWatchShortcutCount; 
@property (assign,nonatomic) unsigned watchShortcutCount;                                               //@synthesize watchShortcutCount=_watchShortcutCount - In the implementation block
@property (assign,nonatomic) BOOL hasSleepShortcutsCount; 
@property (assign,nonatomic) unsigned sleepShortcutsCount;                                              //@synthesize sleepShortcutsCount=_sleepShortcutsCount - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSmallWidgets; 
@property (assign,nonatomic) unsigned numberOfSmallWidgets;                                             //@synthesize numberOfSmallWidgets=_numberOfSmallWidgets - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfMediumWidgets; 
@property (assign,nonatomic) unsigned numberOfMediumWidgets;                                            //@synthesize numberOfMediumWidgets=_numberOfMediumWidgets - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfLargeWidgets; 
@property (assign,nonatomic) unsigned numberOfLargeWidgets;                                             //@synthesize numberOfLargeWidgets=_numberOfLargeWidgets - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfWidgetsOnHomeScreen; 
@property (assign,nonatomic) unsigned numberOfWidgetsOnHomeScreen;                                      //@synthesize numberOfWidgetsOnHomeScreen=_numberOfWidgetsOnHomeScreen - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfWidgetsOnLoL; 
@property (assign,nonatomic) unsigned numberOfWidgetsOnLoL;                                             //@synthesize numberOfWidgetsOnLoL=_numberOfWidgetsOnLoL - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfPersonalAutomationsEnabled; 
@property (assign,nonatomic) unsigned numberOfPersonalAutomationsEnabled;                               //@synthesize numberOfPersonalAutomationsEnabled=_numberOfPersonalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfPersonalAutomationsFromSuggestionsEnabled; 
@property (assign,nonatomic) unsigned numberOfPersonalAutomationsFromSuggestionsEnabled;                //@synthesize numberOfPersonalAutomationsFromSuggestionsEnabled=_numberOfPersonalAutomationsFromSuggestionsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSuggestedAutomationsGenerated; 
@property (assign,nonatomic) unsigned numberOfSuggestedAutomationsGenerated;                            //@synthesize numberOfSuggestedAutomationsGenerated=_numberOfSuggestedAutomationsGenerated - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas; 
@property (assign,nonatomic) unsigned numberOfSuggestedAutomationsGeneratedUserAlreadyHas;              //@synthesize numberOfSuggestedAutomationsGeneratedUserAlreadyHas=_numberOfSuggestedAutomationsGeneratedUserAlreadyHas - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationSuggestionsTrialIdentifier; 
@property (nonatomic,retain) NSString * automationSuggestionsTrialIdentifier;                           //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setHasInstalled:(BOOL)arg1 ;
-(BOOL)hasInstalled;
-(BOOL)installed;
-(BOOL)hasKey;
-(unsigned)shortcutsCount;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)personalAutomationsEnabled;
-(void)setPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)homeAutomationsEnabled;
-(void)setHomeAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)sleepEnabled;
-(void)setSleepEnabled:(BOOL)arg1 ;
-(unsigned)shortcutComplicationSlotsUsed;
-(void)setShortcutComplicationSlotsUsed:(unsigned)arg1 ;
-(unsigned)appComplicationSlotsUsed;
-(void)setAppComplicationSlotsUsed:(unsigned)arg1 ;
-(unsigned)averageShortcutCountPerFolder;
-(void)setAverageShortcutCountPerFolder:(unsigned)arg1 ;
-(void)setShortcutsCount:(unsigned)arg1 ;
-(unsigned)uncategorizedShortcutCount;
-(void)setUncategorizedShortcutCount:(unsigned)arg1 ;
-(unsigned)watchShortcutCount;
-(void)setWatchShortcutCount:(unsigned)arg1 ;
-(unsigned)folderCount;
-(void)setFolderCount:(unsigned)arg1 ;
-(unsigned)numberOfPersonalAutomationsEnabled;
-(void)setNumberOfPersonalAutomationsEnabled:(unsigned)arg1 ;
-(unsigned)numberOfPersonalAutomationsFromSuggestionsEnabled;
-(void)setNumberOfPersonalAutomationsFromSuggestionsEnabled:(unsigned)arg1 ;
-(unsigned)shortcutRunCount;
-(void)setShortcutRunCount:(unsigned)arg1 ;
-(unsigned)appSessionCount;
-(void)setAppSessionCount:(unsigned)arg1 ;
-(unsigned)sleepShortcutsCount;
-(void)setSleepShortcutsCount:(unsigned)arg1 ;
-(unsigned)numberOfSmallWidgets;
-(void)setNumberOfSmallWidgets:(unsigned)arg1 ;
-(unsigned)numberOfMediumWidgets;
-(void)setNumberOfMediumWidgets:(unsigned)arg1 ;
-(unsigned)numberOfLargeWidgets;
-(void)setNumberOfLargeWidgets:(unsigned)arg1 ;
-(unsigned)numberOfWidgetsOnHomeScreen;
-(void)setNumberOfWidgetsOnHomeScreen:(unsigned)arg1 ;
-(unsigned)numberOfWidgetsOnLoL;
-(void)setNumberOfWidgetsOnLoL:(unsigned)arg1 ;
-(unsigned)numberOfSuggestedAutomationsGenerated;
-(void)setNumberOfSuggestedAutomationsGenerated:(unsigned)arg1 ;
-(unsigned)numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
-(void)setNumberOfSuggestedAutomationsGeneratedUserAlreadyHas:(unsigned)arg1 ;
-(NSString *)automationSuggestionsTrialIdentifier;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(void)setHasSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasSharingEnabled;
-(void)setHasPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasPersonalAutomationsEnabled;
-(void)setHasHomeAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasHomeAutomationsEnabled;
-(void)setHasShortcutComplicationSlotsUsed:(BOOL)arg1 ;
-(BOOL)hasShortcutComplicationSlotsUsed;
-(void)setHasAppComplicationSlotsUsed:(BOOL)arg1 ;
-(BOOL)hasAppComplicationSlotsUsed;
-(void)setHasSleepEnabled:(BOOL)arg1 ;
-(BOOL)hasSleepEnabled;
-(void)setHasShortcutsCount:(BOOL)arg1 ;
-(BOOL)hasShortcutsCount;
-(void)setHasFolderCount:(BOOL)arg1 ;
-(BOOL)hasFolderCount;
-(void)setHasAverageShortcutCountPerFolder:(BOOL)arg1 ;
-(BOOL)hasAverageShortcutCountPerFolder;
-(void)setHasUncategorizedShortcutCount:(BOOL)arg1 ;
-(BOOL)hasUncategorizedShortcutCount;
-(void)setHasShortcutRunCount:(BOOL)arg1 ;
-(BOOL)hasShortcutRunCount;
-(void)setHasAppSessionCount:(BOOL)arg1 ;
-(BOOL)hasAppSessionCount;
-(void)setHasWatchShortcutCount:(BOOL)arg1 ;
-(BOOL)hasWatchShortcutCount;
-(void)setHasSleepShortcutsCount:(BOOL)arg1 ;
-(BOOL)hasSleepShortcutsCount;
-(void)setHasNumberOfSmallWidgets:(BOOL)arg1 ;
-(BOOL)hasNumberOfSmallWidgets;
-(void)setHasNumberOfMediumWidgets:(BOOL)arg1 ;
-(BOOL)hasNumberOfMediumWidgets;
-(void)setHasNumberOfLargeWidgets:(BOOL)arg1 ;
-(BOOL)hasNumberOfLargeWidgets;
-(void)setHasNumberOfWidgetsOnHomeScreen:(BOOL)arg1 ;
-(BOOL)hasNumberOfWidgetsOnHomeScreen;
-(void)setHasNumberOfWidgetsOnLoL:(BOOL)arg1 ;
-(BOOL)hasNumberOfWidgetsOnLoL;
-(void)setHasNumberOfPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasNumberOfPersonalAutomationsEnabled;
-(void)setHasNumberOfPersonalAutomationsFromSuggestionsEnabled:(BOOL)arg1 ;
-(BOOL)hasNumberOfPersonalAutomationsFromSuggestionsEnabled;
-(void)setHasNumberOfSuggestedAutomationsGenerated:(BOOL)arg1 ;
-(BOOL)hasNumberOfSuggestedAutomationsGenerated;
-(void)setHasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas:(BOOL)arg1 ;
-(BOOL)hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas;
-(BOOL)hasAutomationSuggestionsTrialIdentifier;
@end
