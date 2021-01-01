//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SATTSSpeechSynthesisStreaming, VSPresynthesizedAudioRequest, VSSpeechRequest, VSVoiceAsset;

@protocol VSSpeechXPCServiceProtocol <NSObject>
- (oneway void)killDaemon;
- (oneway void)invokeDaemon:(void (^)(void))arg1;
- (oneway void)forwardStreamObject:(SATTSSpeechSynthesisStreaming *)arg1;
- (oneway void)getTTSServerVoicesWithFilter:(VSVoiceAsset *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getLogToFile:(void (^)(_Bool))arg1;
- (oneway void)setLogToFile:(_Bool)arg1;
- (oneway void)cancelDownloads:(void (^)(void))arg1;
- (oneway void)getVoiceInfoForLanguageCode:(NSString *)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(void (^)(VSVoiceAsset *))arg5;
- (oneway void)getVoiceResourceForLanguage:(NSString *)arg1 reply:(void (^)(VSVoiceResourceAsset *))arg2;
- (oneway void)getAutoDownloadedVoiceAssetsWithClientID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)triggerCellularDownloadedVoiceAssets:(NSArray *)arg1 withClientID:(NSString *)arg2;
- (oneway void)setAutoDownloadedVoiceAssets:(NSArray *)arg1 withClientID:(NSString *)arg2;
- (oneway void)getLocalVoiceResourcesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getLocalVoicesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)cleanUnusedAssets:(void (^)(NSError *))arg1;
- (oneway void)endAudioPowerUpdate;
- (oneway void)beginAudioPowerUpdateWithReply:(void (^)(AFXPCWrapper *))arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(void (^)(_Bool))arg1;
- (oneway void)getSpeechIsActiveReply:(void (^)(_Bool))arg1;
- (oneway void)getFootprintsForVoiceName:(NSString *)arg1 languageCode:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (oneway void)getVoiceNamesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)stopPresynthesizedAudioRequest;
- (oneway void)cachePresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1;
- (oneway void)startPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)startSynthesisRequest:(VSSpeechRequest *)arg1;
- (oneway void)startSpeechRequest:(VSSpeechRequest *)arg1 reply:(void (^)(void))arg2;
- (oneway void)estimateDurationWithRequest:(VSSpeechRequest *)arg1 reply:(void (^)(double, NSError *))arg2;
- (oneway void)queryPhaticCapabilityWithRequest:(VSSpeechRequest *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)prewarmIfNeededWithRequest:(VSSpeechRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)updateWithConnectionIdentifier:(NSString *)arg1;
@end
