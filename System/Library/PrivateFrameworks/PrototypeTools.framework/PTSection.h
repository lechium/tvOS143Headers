/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/PTRowObserver.h>
#import <libobjc.A.dylib/PTModuleComponent.h>

@protocol PTComponentObserver;
@class PTSettings, NSPredicate, NSString, NSArray, NSMutableArray;

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver, PTModuleComponent> {

	NSArray* _rows;
	NSMutableArray* _enabledRows;
	BOOL _enabledSection;
	PTSettings* _settings;
	id<PTComponentObserver> _componentObserver;
	NSPredicate* _appearancePredicate;
	NSString* _childSettingsKeyPath;
	NSString* _title;
	/*^block*/id _footerTextGetter;
	/*^block*/id _unregisterBlock;

}

@property (nonatomic,retain) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id footerTextGetter;                                             //@synthesize footerTextGetter=_footerTextGetter - In the implementation block
@property (nonatomic,copy) id unregisterBlock;                                              //@synthesize unregisterBlock=_unregisterBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PTComponentObserver> componentObserver;              //@synthesize componentObserver=_componentObserver - In the implementation block
@property (nonatomic,retain) PTSettings * settings;                                         //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSPredicate * appearancePredicate;                             //@synthesize appearancePredicate=_appearancePredicate - In the implementation block
@property (nonatomic,retain) NSString * childSettingsKeyPath;                               //@synthesize childSettingsKeyPath=_childSettingsKeyPath - In the implementation block
@property (nonatomic,readonly) NSArray * allSections; 
@property (nonatomic,readonly) NSArray * enabledSections; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(PTSettings *)settings;
-(void)setSettings:(PTSettings *)arg1 ;
-(id)unregisterBlock;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setUnregisterBlock:(id)arg1 ;
-(void)_reloadEnabledRows;
-(void)_recomputeEnabledSection;
-(void)_updateEnabledRows;
-(id)initWithRows:(id)arg1 ;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(NSPredicate *)arg1 ;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(NSString *)arg1 ;
-(BOOL)_shouldEnableRow:(id)arg1 ;
-(void)_sendInserts:(id)arg1 deletes:(id)arg2 ;
-(void)_sendReload;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id<PTComponentObserver>)arg1 ;
-(NSArray *)allSections;
-(NSArray *)enabledSections;
-(unsigned long long)numberOfRows;
-(unsigned long long)indexOfRow:(id)arg1 ;
-(void)reloadSection;
-(id)footerTextGetter;
-(void)setFooterTextGetter:(id)arg1 ;
@end

