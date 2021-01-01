/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSDictionary, NSArray;

@interface _DKSync2Policy : NSObject {

	BOOL _syncDisabled;
	BOOL _pushTriggersSync;
	BOOL _requireCharging;
	NSString* _name;
	NSNumber* _version;
	unsigned long long _maxSyncPeriodInDays;
	unsigned long long _maxSyncDownIntervalInDays;
	unsigned long long _minSyncIntervalInSeconds;
	unsigned long long _minSyncWindowInSeconds;
	unsigned long long _minSyncsPerDay;
	unsigned long long _maxSyncsPerDay;
	unsigned long long _numChangesTriggeringSync;
	unsigned long long _singleDeviceSyncIntervalInDays;
	NSDictionary* _streamNamesToSync;
	NSArray* _streamNamesWithAdditionsTriggeringSync;
	NSArray* _streamNamesWithDeletionsTriggeringSync;
	unsigned long long _syncBatchSizeInEvents;
	unsigned long long _maxBatchesPerSync;
	unsigned long long _syncTimeoutInSeconds;
	unsigned long long _triggeredSyncDelayInSeconds;
	unsigned long long _policyDownloadIntervalInDays;
	NSArray* _streamNamesToAlwaysSync;

}

@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * version;                                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL syncDisabled;                                              //@synthesize syncDisabled=_syncDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncPeriodInDays;                         //@synthesize maxSyncPeriodInDays=_maxSyncPeriodInDays - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncDownIntervalInDays;                   //@synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncIntervalInSeconds;                    //@synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncWindowInSeconds;                      //@synthesize minSyncWindowInSeconds=_minSyncWindowInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncsPerDay;                              //@synthesize minSyncsPerDay=_minSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncsPerDay;                              //@synthesize maxSyncsPerDay=_maxSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long numChangesTriggeringSync;                    //@synthesize numChangesTriggeringSync=_numChangesTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long policyDownloadIntervalInDays;                //@synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays - In the implementation block
@property (assign,nonatomic) BOOL pushTriggersSync;                                          //@synthesize pushTriggersSync=_pushTriggersSync - In the implementation block
@property (assign,nonatomic) BOOL requireCharging;                                           //@synthesize requireCharging=_requireCharging - In the implementation block
@property (assign,nonatomic) unsigned long long singleDeviceSyncIntervalInDays;              //@synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays - In the implementation block
@property (nonatomic,retain) NSDictionary * streamNamesToSync;                               //@synthesize streamNamesToSync=_streamNamesToSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesToAlwaysSync;                              //@synthesize streamNamesToAlwaysSync=_streamNamesToAlwaysSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesWithAdditionsTriggeringSync;               //@synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesWithDeletionsTriggeringSync;               //@synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long syncBatchSizeInEvents;                       //@synthesize syncBatchSizeInEvents=_syncBatchSizeInEvents - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchesPerSync;                           //@synthesize maxBatchesPerSync=_maxBatchesPerSync - In the implementation block
@property (assign,nonatomic) unsigned long long syncTimeoutInSeconds;                        //@synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long triggeredSyncDelayInSeconds;                 //@synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds - In the implementation block
+(id)policyFromDictionary:(id)arg1 ;
+(id)disabledFeaturesForSyncType:(id)arg1 transports:(long long)arg2 ;
+(BOOL)cloudSyncDisabled;
+(BOOL)rapportSyncDisabled;
+(id)policyForSyncTransportType:(long long)arg1 ;
+(void)setOkToDownloadPolicyUpdates:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(BOOL)syncDisabled;
-(void)setSyncDisabled:(BOOL)arg1 ;
-(void)setMaxBatchesPerSync:(unsigned long long)arg1 ;
-(void)setMaxSyncPeriodInDays:(unsigned long long)arg1 ;
-(void)setMaxSyncDownIntervalInDays:(unsigned long long)arg1 ;
-(void)setMinSyncIntervalInSeconds:(unsigned long long)arg1 ;
-(void)setMinSyncWindowInSeconds:(unsigned long long)arg1 ;
-(void)setMinSyncsPerDay:(unsigned long long)arg1 ;
-(void)setMaxSyncsPerDay:(unsigned long long)arg1 ;
-(void)setNumChangesTriggeringSync:(unsigned long long)arg1 ;
-(void)setPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
-(void)setPushTriggersSync:(BOOL)arg1 ;
-(void)setRequireCharging:(BOOL)arg1 ;
-(void)setSingleDeviceSyncIntervalInDays:(unsigned long long)arg1 ;
-(void)setStreamNamesToSync:(NSDictionary *)arg1 ;
-(void)setStreamNamesToAlwaysSync:(NSArray *)arg1 ;
-(void)setStreamNamesWithAdditionsTriggeringSync:(NSArray *)arg1 ;
-(void)setStreamNamesWithDeletionsTriggeringSync:(NSArray *)arg1 ;
-(void)setSyncBatchSizeInEvents:(unsigned long long)arg1 ;
-(void)setSyncTimeoutInSeconds:(unsigned long long)arg1 ;
-(void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1 ;
-(id)streamNamesToSyncWithDisabledFeatures:(id)arg1 ;
-(BOOL)pushTriggersSync;
-(unsigned long long)minSyncsPerDay;
-(BOOL)requireCharging;
-(unsigned long long)maxSyncsPerDay;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 ;
-(unsigned long long)maxSyncPeriodInDays;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 urgency:(unsigned long long)arg2 ;
-(unsigned long long)singleDeviceSyncIntervalInDays;
-(unsigned long long)maxSyncDownIntervalInDays;
-(unsigned long long)minSyncIntervalInSeconds;
-(unsigned long long)minSyncWindowInSeconds;
-(unsigned long long)numChangesTriggeringSync;
-(unsigned long long)policyDownloadIntervalInDays;
-(NSDictionary *)streamNamesToSync;
-(NSArray *)streamNamesToAlwaysSync;
-(NSArray *)streamNamesWithAdditionsTriggeringSync;
-(NSArray *)streamNamesWithDeletionsTriggeringSync;
-(unsigned long long)syncBatchSizeInEvents;
-(unsigned long long)maxBatchesPerSync;
-(unsigned long long)syncTimeoutInSeconds;
-(unsigned long long)triggeredSyncDelayInSeconds;
-(id)streamNamesToSyncWithSyncType:(id)arg1 transportType:(long long)arg2 ;
-(BOOL)canDeferSyncOperationWithSyncType:(id)arg1 ;
-(BOOL)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isCharging:(BOOL)arg4 ;
-(BOOL)highPriorityForSyncDownWithSyncType:(id)arg1 ;
-(BOOL)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2 ;
-(id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 previousHighWaterMark:(id)arg4 ;
-(id)queryStartDateWithSyncType:(id)arg1 previousHighWaterMark:(id)arg2 ;
@end

