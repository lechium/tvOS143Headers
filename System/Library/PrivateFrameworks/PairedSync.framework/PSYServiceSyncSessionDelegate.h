/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSYServiceSyncSessionDelegate <NSObject>
@required
-(void)syncSessionDidCompleteSending:(id)arg1;
-(void)syncSessionDidComplete:(id)arg1;
-(void)syncSession:(id)arg1 didFailWithError:(id)arg2;
-(void)syncSession:(id)arg1 reportProgress:(double)arg2;

@end
