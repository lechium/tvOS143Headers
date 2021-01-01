/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKXPCClient <NSObject>
@required
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2;
-(void)resetThrottles;
-(void)addThrottle:(id)arg1;

@end

