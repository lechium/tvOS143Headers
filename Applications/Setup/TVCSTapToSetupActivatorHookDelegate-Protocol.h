//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVCSTapToSetupManager;

@protocol TVCSTapToSetupActivatorHookDelegate <NSObject>
- (void)tapToSetupManager:(TVCSTapToSetupManager *)arg1 readyToActivateWithCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

