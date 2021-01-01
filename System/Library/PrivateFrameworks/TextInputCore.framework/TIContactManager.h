/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TIContactManaging.h>

@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging> {

	NSUUID* contactCollectionUUID;

}

@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedTIContactManager;
+(void)setSharedTIContactManager:(id)arg1 ;
-(void)unload;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(NSUUID *)contactCollectionUUID;
@end

