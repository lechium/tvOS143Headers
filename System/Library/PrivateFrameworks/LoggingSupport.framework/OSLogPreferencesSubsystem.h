/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSMutableDictionary, NSArray;

@interface OSLogPreferencesSubsystem : NSObject {

	NSString* _systemPrefsFile;
	NSDictionary* _systemPrefs;
	NSString* _internalPrefsFile;
	NSDictionary* _internalPrefs;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)reset;
-(BOOL)isLocked;
-(NSArray *)categories;
-(void)resetAll;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(long long)_defaultEnabledLevelForCategory:(id)arg1 ;
-(long long)_defaultPersistedLevelForCategory:(id)arg1 ;
-(long long)_enabledLevelForCategory:(id)arg1 ;
-(long long)_persistedLevelForCategory:(id)arg1 ;
-(BOOL)_signpostEnabledForCategory:(id)arg1 ;
-(BOOL)_signpostPersistedForCategory:(id)arg1 ;
-(id)_prefsForCategory:(id)arg1 ;
-(id)_levelPrefsForCategory:(id)arg1 ;
-(void)_setEnabledLevel:(long long)arg1 forCategory:(id)arg2 ;
-(void)_setPersistedLevel:(long long)arg1 forCategory:(id)arg2 ;
-(void)_setSignpostEnabled:(BOOL)arg1 forCategory:(id)arg2 ;
-(void)_setSignpostPersisted:(BOOL)arg1 forCategory:(id)arg2 ;
-(void)_resetCategory:(id)arg1 ;
@end

