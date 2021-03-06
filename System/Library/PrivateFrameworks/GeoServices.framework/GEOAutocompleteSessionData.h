/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {

	GEOSessionID _analyticsShortSessionId;
	GEOPDAutocompleteSessionData* _autocompleteSessionData;

}

@property (nonatomic,readonly) GEOPDAutocompleteSessionData * autocompleteSessionData;              //@synthesize autocompleteSessionData=_autocompleteSessionData - In the implementation block
-(id)init;
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(id)updateWithAutoCompleteSessionData:(id)arg1 ;
-(id)initWithAutoCompleteSessionData:(id)arg1 ;
@end

