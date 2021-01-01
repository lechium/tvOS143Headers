/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface SUCorePersistedState : NSObject {

	NSObject*<OS_dispatch_queue> _persistedStateQueue;
	NSString* _persistencePath;
	NSString* _versionPolicyLayer;
	NSMutableDictionary* _persistedState;
	NSString* _versionSUCore;

}

@property (nonatomic,retain) NSMutableDictionary * persistedState;                            //@synthesize persistedState=_persistedState - In the implementation block
@property (nonatomic,retain) NSString * persistencePath;                                      //@synthesize persistencePath=_persistencePath - In the implementation block
@property (nonatomic,retain) NSString * versionPolicyLayer;                                   //@synthesize versionPolicyLayer=_versionPolicyLayer - In the implementation block
@property (nonatomic,retain) NSString * versionSUCore;                                        //@synthesize versionSUCore=_versionSUCore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> persistedStateQueue;              //@synthesize persistedStateQueue=_persistedStateQueue - In the implementation block
-(id)description;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)summary;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)dateForKey:(id)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 withPersistencePath:(id)arg2 forPolicyVersion:(id)arg3 ;
-(void)persistObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)loadPersistedState;
-(void)persistDictionary:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)persistedStateQueue;
-(NSMutableDictionary *)persistedState;
-(NSString *)persistencePath;
-(void)setPersistedState:(NSMutableDictionary *)arg1 ;
-(id)_createEmptyPersistedState;
-(BOOL)booleanForKey:(id)arg1 forType:(int)arg2 ;
-(id)_keyNameForPersistedStateType:(int)arg1 ;
-(unsigned long long)ullForKey:(id)arg1 forType:(int)arg2 ;
-(id)stringForKey:(id)arg1 forType:(int)arg2 ;
-(id)dictionaryForKey:(id)arg1 forType:(int)arg2 ;
-(id)dataForKey:(id)arg1 forType:(int)arg2 ;
-(id)dateForKey:(id)arg1 forType:(int)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 forType:(int)arg3 ;
-(id)secureCodedObjectForKey:(id)arg1 ofClass:(Class)arg2 encodeClasses:(id)arg3 forType:(int)arg4 ;
-(void)persistBoolean:(BOOL)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistBoolean:(BOOL)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)_writePersistedState;
-(void)persistULL:(unsigned long long)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistULL:(unsigned long long)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)persistString:(id)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistString:(id)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)persistDictionary:(id)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistDictionary:(id)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)persistData:(id)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistData:(id)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)persistDate:(id)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistDate:(id)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)persistObject:(id)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistObject:(id)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(void)persistSecureCodedObject:(id)arg1 forKey:(id)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistSecureCodedObject:(id)arg1 forKey:(id)arg2 forType:(int)arg3 shouldPersist:(BOOL)arg4 ;
-(NSString *)versionPolicyLayer;
-(NSString *)versionSUCore;
-(BOOL)isPersistedStateLoaded;
-(id)persistedContentsType;
-(id)persistedCoreVersion;
-(id)persistedPolicyVersion;
-(void)removePersistedState;
-(BOOL)booleanForKey:(id)arg1 ;
-(unsigned long long)ullForKey:(id)arg1 ;
-(id)secureCodedObjectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)secureCodedObjectForKey:(id)arg1 ofClass:(Class)arg2 encodeClasses:(id)arg3 ;
-(id)secureCodedObjectForKey:(id)arg1 ofClass:(Class)arg2 forType:(int)arg3 ;
-(void)persistBoolean:(BOOL)arg1 forKey:(id)arg2 ;
-(void)persistULL:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)persistString:(id)arg1 forKey:(id)arg2 ;
-(void)persistData:(id)arg1 forKey:(id)arg2 ;
-(void)persistDate:(id)arg1 forKey:(id)arg2 ;
-(void)persistSecureCodedObject:(id)arg1 forKey:(id)arg2 ;
-(void)persistState;
-(void)setPersistencePath:(NSString *)arg1 ;
-(void)setVersionPolicyLayer:(NSString *)arg1 ;
-(void)setVersionSUCore:(NSString *)arg1 ;
@end

