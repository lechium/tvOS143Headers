/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DEDCollectionNotification : NSObject
+(id)log;
+(BOOL)shouldFireNotificationForTransport:(long long)arg1 ;
+(void)fireNotificationWithFinishingMove:(long long)arg1 ;
+(void)beginListeningForNotification;
+(void)postNotificationToNotificationCenterForFinishingMove:(long long)arg1 ;
+(void)handleDistributedNotification:(id)arg1 ;
+(void)configureEventStream;
@end

