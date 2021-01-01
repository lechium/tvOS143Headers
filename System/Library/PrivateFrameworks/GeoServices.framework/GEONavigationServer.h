/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEONavigationServerPushStateXPCInterface.h>

@class GEONavdPeer, NSMutableArray, NSData, NSString;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {

	GEONavdPeer* _pushStatePeer;
	NSMutableArray* _listenerPeers;
	BOOL _isListenerConnectionOpen;
	int _listenerConnectionOpenToken;
	unsigned long long _state;
	int _transportType;
	NSData* _routeSummaryData;
	NSData* _transitSummaryData;
	NSData* _guidanceStateData;
	NSData* _activeRouteDetailsData;
	NSData* _stepIndexData;
	NSData* _stepNameInfoData;
	NSData* _rideSelectionsData;
	NSData* _positionFromSignData;
	NSData* _positionFromManeuverData;
	NSData* _positionFromDestinationData;
	NSData* _navigationVoiceVolumeData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id)init;
-(void)dealloc;
-(void)clearAllData;
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 ;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1 ;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg1 ;
-(void)setRouteSummaryWithGuidanceStateData:(id)arg1 ;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1 ;
-(void)setRouteSummaryWithStepIndexData:(id)arg1 ;
-(void)setRouteSummaryWithStepNameInfoData:(id)arg1 ;
-(void)setRouteSummaryWithRideSelectionsData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromSignData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromManeuverData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromDestinationData:(id)arg1 ;
-(void)setNavigationVoiceVolumeWithData:(id)arg1 ;
-(void)setCurrentRoadName:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(BOOL)arg2 ;
-(void)_requestRouteSummaryWithPeer:(id)arg1 ;
-(void)_requestTransitSummaryWithPeer:(id)arg1 ;
-(void)_requestGuidanceStateWithPeer:(id)arg1 ;
-(void)_requestActiveRouteDetailsDataWithPeer:(id)arg1 ;
-(void)_requestStepIndexWithPeer:(id)arg1 ;
-(void)_requestStepNameInfoWithPeer:(id)arg1 ;
-(void)_requestRideSelectionsWithPeer:(id)arg1 ;
-(void)_requestPositionFromSignWithPeer:(id)arg1 ;
-(void)_requestPositionFromManeuverWithPeer:(id)arg1 ;
-(void)_requestPositionFromDestinationWithPeer:(id)arg1 ;
-(void)_requestNavigationVoiceVolumeWithPeer:(id)arg1 ;
-(void)_openPushStatePeerConnection:(id)arg1 ;
-(void)_notifyListenersOpenConnection;
-(void)_forEachValidPeerProxyOnMainQueue:(/*^block*/id)arg1 ;
-(void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2 ;
-(void)_forEachValidPeerProxy:(/*^block*/id)arg1 ;
-(void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3 ;
-(void)_closePushStatePeerConnection;
@end

