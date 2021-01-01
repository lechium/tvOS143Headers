/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDOctagonTrustProxy.h>

@class CDPContext, NSString;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy> {

	CDPContext* _cdpContext;

}

@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(CDPContext *)arg1 ;
-(id)fetchEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchAllEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3 ;
@end

