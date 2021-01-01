/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KeychainCircle/KCSRPContext.h>

@interface KCSRPClientContext : KCSRPContext
-(id)copyStart:(id*)arg1 ;
-(id)copyResposeToChallenge:(id)arg1 password:(id)arg2 salt:(id)arg3 error:(id*)arg4 ;
-(BOOL)verifyConfirmation:(id)arg1 error:(id*)arg2 ;
@end
