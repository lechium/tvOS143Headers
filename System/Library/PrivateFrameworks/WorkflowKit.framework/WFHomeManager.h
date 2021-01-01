/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@protocol OS_dispatch_group;
@class NSArray, NSHashTable, HMHomeManager, NSObject, NSString;

@interface WFHomeManager : NSObject <HMHomeManagerDelegate, WFApplicationStateObserver> {

	BOOL _hasLoadedHomes;
	BOOL _loading;
	NSArray* _homes;
	NSHashTable* _eventObservers;
	HMHomeManager* _homeManager;
	NSObject*<OS_dispatch_group> _loadHomesGroup;

}

@property (nonatomic,readonly) NSHashTable * eventObservers;                               //@synthesize eventObservers=_eventObservers - In the implementation block
@property (nonatomic,retain) HMHomeManager * homeManager;                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> loadHomesGroup;                  //@synthesize loadHomesGroup=_loadHomesGroup - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedHomes;                                        //@synthesize hasLoadedHomes=_hasLoadedHomes - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSArray * homes;                                            //@synthesize homes=_homes - In the implementation block
@property (nonatomic,readonly) NSArray * homesToWhichWeHaveAdminAccess; 
@property (nonatomic,readonly) NSArray * homesToWhichWeCanAddHomeAutomations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)cachedHomeSceneNames;
-(id)init;
-(void)dealloc;
-(unsigned long long)status;
-(void)reloadData;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(NSArray *)homes;
-(id)primaryHome;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(BOOL)hasLoadedHomes;
-(void)addEventObserver:(id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)_setHomes:(id)arg1 ;
-(void)ensureHomesAreLoadedWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)homesToWhichWeHaveAdminAccess;
-(NSArray *)homesToWhichWeCanAddHomeAutomations;
-(id)homeNamed:(id)arg1 ;
-(id)homeWithIdentifier:(id)arg1 ;
-(id)sceneNamed:(id)arg1 inHome:(id)arg2 ;
-(id)serviceWithIdentifier:(id)arg1 inHome:(id)arg2 ;
-(void)cacheHomeSceneNames;
-(NSHashTable *)eventObservers;
-(NSObject*<OS_dispatch_group>)loadHomesGroup;
-(void)setLoadHomesGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

