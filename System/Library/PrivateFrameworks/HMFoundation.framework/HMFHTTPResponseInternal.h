/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFActivity, NSDictionary, NSData;

@interface HMFHTTPResponseInternal : HMFObject <NSCopying> {

	HMFActivity* _activity;
	long long _statusCode;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (nonatomic,readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSData * body;                            //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                 //@synthesize activity=_activity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)statusCode;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(HMFActivity *)activity;
-(void)setActivity:(HMFActivity *)arg1 ;
-(NSDictionary *)headerFields;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
@end

