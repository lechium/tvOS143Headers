/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUIService, NSObjectNSCopying;
@class NSMutableArray;

@interface AXUIServiceContext : NSObject {

	id<AXUIService> _service;
	id<NSObject><NSCopying> _serviceIdentifier;
	NSMutableArray* _clientMessengers;

}

@property (nonatomic,retain) id<AXUIService> service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientMessengers;                    //@synthesize clientMessengers=_clientMessengers - In the implementation block
@property (nonatomic,readonly) unsigned long long clientsCount; 
-(id<AXUIService>)service;
-(id<NSObject><NSCopying>)serviceIdentifier;
-(void)setService:(id<AXUIService>)arg1 ;
-(void)setServiceIdentifier:(id<NSObject><NSCopying>)arg1 ;
-(unsigned long long)clientsCount;
-(id)clientMessengerWithIdentifier:(id)arg1 ;
-(NSMutableArray *)clientMessengers;
-(void)setClientMessengers:(NSMutableArray *)arg1 ;
-(unsigned long long)_indexOfClientWithIdentifier:(id)arg1 ;
-(id)initWithService:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)addClientWithIdentifier:(id)arg1 connection:(id)arg2 ;
-(void)removeClientWithIdentifier:(id)arg1 ;
-(BOOL)hasClientWithIdentifier:(id)arg1 ;
-(void)enumerateClientsUsingBlock:(/*^block*/id)arg1 ;
@end

