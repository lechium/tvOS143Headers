/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFVariableSerialization.h>

@class NSString, CLPlacemark, WFVariableString;

@interface WFLocationValue : NSObject <WFVariableSerialization> {

	BOOL _currentLocation;
	NSString* _locationName;
	CLPlacemark* _placemark;
	WFVariableString* _legacyVariableString;

}

@property (nonatomic,readonly) WFVariableString * legacyVariableString;                    //@synthesize legacyVariableString=_legacyVariableString - In the implementation block
@property (nonatomic,readonly) NSString * locationName;                                    //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                                    //@synthesize placemark=_placemark - In the implementation block
@property (getter=isCurrentLocation,nonatomic,readonly) BOOL currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * defaultSearchText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serializedRepresentation;
-(NSString *)displayString;
-(BOOL)isCurrentLocation;
-(NSString *)locationName;
-(id)initWithLocationName:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(CLPlacemark *)placemark;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithLocationName:(id)arg1 placemark:(id)arg2 ;
-(id)initWithCurrentLocation;
-(NSString *)defaultSearchText;
-(id)initWithLegacyVariableString:(id)arg1 ;
-(WFVariableString *)legacyVariableString;
@end

