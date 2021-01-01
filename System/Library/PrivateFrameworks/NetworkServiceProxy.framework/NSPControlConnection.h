/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSPControlConnection : NSObject {

	unsigned long long _flowIdentifier;

}

@property (readonly) unsigned long long flowIdentifier;              //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
-(unsigned long long)flowIdentifier;
-(id)initFromMetadata:(id)arg1 ;
-(id)initFromStream:(id)arg1 ;
-(id)initFromTask:(id)arg1 ;
-(id)initFromConnection:(id)arg1 ;
-(id)initFromNWConnection:(id)arg1 ;
-(void)fetchConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

