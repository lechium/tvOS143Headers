//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadError.h"

#import "NSCopying-Protocol.h"

@class NSError;

@interface DownloadGenericError : DownloadError <NSCopying>
{
    NSError *_error;	// 40 = 0x28
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100117ed8
- (id)_notificationTitle;	// IMP=0x0000000100117c58
- (id)_notificationBody;	// IMP=0x00000001001178d4
- (_Bool)_isInstallError:(id)arg1;	// IMP=0x0000000100117868
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x00000001001173d0
- (id)copyUserNotification;	// IMP=0x00000001001171e4
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x00000001001170e0
- (void)dealloc;	// IMP=0x0000000100117090
- (id)initWithError:(id)arg1;	// IMP=0x0000000100117030

@end
