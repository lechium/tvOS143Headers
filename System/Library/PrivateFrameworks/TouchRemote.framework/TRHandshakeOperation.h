/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TROperation.h>

@interface TRHandshakeOperation : TROperation {

	long long _protocolVersion;

}

@property (assign,nonatomic) long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(void)execute;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(void)_handleResponse:(id)arg1 ;
@end

