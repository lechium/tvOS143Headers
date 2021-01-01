/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSArray, NSURL, REDataSourceLoader, RERelevanceProviderManagerLoader, RELocationManager, REFeatureSet, NSString;

@interface RERelevanceEngineConfiguration : NSObject <REAutomaticExportedInterface, NSCopying, NSMutableCopying> {

	NSMutableDictionary* _values;
	NSArray* _whitelistedDataSourceClassNames;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> engineQueue; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue; 
@property (nonatomic,copy,readonly) NSURL * modelFileURL; 
@property (nonatomic,copy,readonly) NSURL * baseModelFileURL; 
@property (nonatomic,readonly) unsigned long long modelVersion; 
@property (nonatomic,readonly) BOOL allowsUpdatingModelFile; 
@property (nonatomic,copy,readonly) REDataSourceLoader * dataSourceLoader; 
@property (nonatomic,copy,readonly) RERelevanceProviderManagerLoader * relevanceProviderManagerLoader; 
@property (nonatomic,readonly) unsigned long long trainingBehavior; 
@property (nonatomic,readonly) unsigned long long modelStorageBehavior; 
@property (nonatomic,copy,readonly) NSArray * sectionDescriptors; 
@property (nonatomic,copy,readonly) NSArray * interactionDescriptors; 
@property (nonatomic,readonly) RELocationManager * locationManager; 
@property (nonatomic,copy,readonly) REFeatureSet * primaryFeatures; 
@property (nonatomic,readonly) BOOL wantsImmutableContent; 
@property (nonatomic,readonly) NSString * preferenceDomain; 
@property (nonatomic,readonly) BOOL allowsRemoteTraining; 
@property (nonatomic,readonly) BOOL wantsBackup; 
@property (nonatomic,readonly) BOOL ignoreDeviceLockState; 
@property (nonatomic,readonly) BOOL allowsDiagnosticExtension; 
@property (nonatomic,readonly) id<RERelevanceEngineMetricsRecorder> metricsRecorder; 
@property (nonatomic,readonly) BOOL ignoresInstalledApplications; 
@property (nonatomic,copy,readonly) NSArray * whitelistedDataSourceClassNames;                                      //@synthesize whitelistedDataSourceClassNames=_whitelistedDataSourceClassNames - In the implementation block
+(id)defaultConfiguration;
+(id)defaultUpNextConfiguration;
+(id)sampleUpNextConfiguration;
+(id)_defaultModelFileURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)preferenceDomain;
-(unsigned long long)modelVersion;
-(RELocationManager *)locationManager;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(NSArray *)sectionDescriptors;
-(BOOL)wantsImmutableContent;
-(BOOL)ignoreDeviceLockState;
-(BOOL)ignoresInstalledApplications;
-(NSArray *)whitelistedDataSourceClassNames;
-(unsigned long long)trainingBehavior;
-(BOOL)allowsRemoteTraining;
-(REDataSourceLoader *)dataSourceLoader;
-(RERelevanceProviderManagerLoader *)relevanceProviderManagerLoader;
-(NSObject*<OS_dispatch_queue>)engineQueue;
-(BOOL)allowsDiagnosticExtension;
-(REFeatureSet *)primaryFeatures;
-(NSArray *)interactionDescriptors;
-(NSURL *)baseModelFileURL;
-(id)valueForKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3 ;
-(NSURL *)modelFileURL;
-(BOOL)allowsUpdatingModelFile;
-(unsigned long long)modelStorageBehavior;
-(BOOL)wantsBackup;
-(id<RERelevanceEngineMetricsRecorder>)metricsRecorder;
-(void)setValue:(id)arg1 forKey:(id)arg2 ofClass:(Class)arg3 ;
@end
