/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFIMAPConnectionDelegate <NSObject>
@optional
-(void)willRemoveDelegation:(id)arg1;
-(BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3;
-(void)connectionDidDisconnect:(id)arg1;
-(void)connection:(id)arg1 didBeginBodyLoad:(id)arg2 section:(id)arg3;
-(void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2 section:(id)arg3;
-(void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2 section:(id)arg3;
-(unsigned)connectionBodyDataReadChunkSize:(id)arg1;
-(BOOL)shouldStartIdleForConnection:(id)arg1;

@end

