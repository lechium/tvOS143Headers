//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSEndpointerMetrics;
@protocol CSEndpointAnalyzer;

@protocol CSEndpointAnalyzerDelegate <NSObject>
- (void)endpointer:(id <CSEndpointAnalyzer>)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(CSEndpointerMetrics *)arg3;
- (void)endpointer:(id <CSEndpointAnalyzer>)arg1 didDetectStartpointAtTime:(double)arg2;
@end

