/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BROperationClient <BRCancellable>
@required
-(id)description;
-(oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
-(oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;

@end

