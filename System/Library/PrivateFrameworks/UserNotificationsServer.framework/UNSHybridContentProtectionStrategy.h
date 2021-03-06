/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@protocol UNSHybridContentProtectionStrategyDelegate;
@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	id<UNSHybridContentProtectionStrategyDelegate> _delegate;
	NSString* _minimumProtection;
	BOOL _needsMerge;
	UNSAtomicDataContentProtectionStrategy* _protectedContentAvailableStrategy;
	UNSFileHandleContentProtectionStrategy* _protectedContentUnavailableStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)isProtectedDataAvailable;
-(id)_strategyForProtectionState;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(id)dataAtPath:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(void)importDataWithImportHandler:(/*^block*/id)arg1 ;
-(id)initWithFileProtectionType:(id)arg1 delegate:(id)arg2 ;
-(BOOL)_mergeIsSupported;
@end

