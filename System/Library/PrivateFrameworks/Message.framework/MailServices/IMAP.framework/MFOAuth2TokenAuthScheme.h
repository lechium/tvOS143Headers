/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFAuthScheme.h>

@interface MFOAuth2TokenAuthScheme : MFAuthScheme
-(id)name;
-(id)humanReadableName;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
@end

