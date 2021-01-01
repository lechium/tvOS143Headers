/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOLPRVehicle, NSArray, _MNLPRPlate, NSDate, NSTimeZone, NSDictionary, NSMutableDictionary;

@interface MNLPRRuleMatcher : NSObject {

	GEOLPRVehicle* _vehicle;
	NSArray* _ruleSets;
	unsigned long long _signpost;
	_MNLPRPlate* _lastPlate;
	NSDate* _lastDate;
	NSTimeZone* _lastTimeZone;
	NSDictionary* _usedRegions;
	NSMutableDictionary* _usedRegionETAs;

}
-(id)initForVehicle:(id)arg1 withRules:(id)arg2 ;
-(id)generateMaskedPlateForWaypoints:(id)arg1 date:(id)arg2 timeZone:(id)arg3 error:(id*)arg4 ;
-(id)debug_jsonDescriptionOfLastPlate;
@end
