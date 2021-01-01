/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TVPAudioRouteVolume, NSDictionary;

@interface TVPAudioRoute : NSObject {

	BOOL _selected;
	BOOL _defaultRoute;
	NSString* _routeName;
	NSString* _routeIdentifier;
	long long _routeDeviceType;
	long long _securityType;
	TVPAudioRouteVolume* _volumeControl;
	NSDictionary* _routeDescription;

}

@property (nonatomic,readonly) NSDictionary * routeDescription;                      //@synthesize routeDescription=_routeDescription - In the implementation block
@property (nonatomic,retain) TVPAudioRouteVolume * volumeControl;                    //@synthesize volumeControl=_volumeControl - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) NSString * comparisonIdentifier; 
@property (nonatomic,readonly) NSString * routeName;                                 //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) NSString * routeIdentifier;                           //@synthesize routeIdentifier=_routeIdentifier - In the implementation block
@property (nonatomic,readonly) long long routeDeviceType;                            //@synthesize routeDeviceType=_routeDeviceType - In the implementation block
@property (nonatomic,readonly) long long securityType;                               //@synthesize securityType=_securityType - In the implementation block
@property (getter=isDefaultRoute,nonatomic,readonly) BOOL defaultRoute;              //@synthesize defaultRoute=_defaultRoute - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(long long)securityType;
-(NSString *)routeIdentifier;
-(NSDictionary *)routeDescription;
-(NSString *)routeName;
-(BOOL)isDefaultRoute;
-(id)initWithRouteDescription:(id)arg1 ;
-(long long)routeDeviceType;
-(NSString *)comparisonIdentifier;
-(TVPAudioRouteVolume *)volumeControl;
-(void)setVolumeControl:(TVPAudioRouteVolume *)arg1 ;
@end

