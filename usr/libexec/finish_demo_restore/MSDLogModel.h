//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDLogModel : NSObject
{
    struct __sFILE *_logFP;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100002c88
@property struct __sFILE *logFP; // @synthesize logFP=_logFP;
- (id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2;	// IMP=0x00000001000035ec
- (_Bool)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3;	// IMP=0x0000000100003028
- (_Bool)logToFileEnabled;	// IMP=0x0000000100003018
- (_Bool)enableLogToFile:(id)arg1;	// IMP=0x0000000100002ed4
- (void)logMessage:(id)arg1;	// IMP=0x0000000100002d70
- (void)logWithFormat:(id)arg1 andArgs:(char *)arg2;	// IMP=0x0000000100002cf4

@end

