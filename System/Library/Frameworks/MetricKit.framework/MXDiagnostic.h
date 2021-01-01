/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXMetaData, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding> {

	MXMetaData* _metaData;
	NSString* _applicationVersion;
	NSMeasurementFormatter* _measurementFormatter;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
@property (retain) MXMetaData * metaData;                                      //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * applicationVersion;                            //@synthesize applicationVersion=_applicationVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(MXMetaData *)metaData;
-(void)setMetaData:(MXMetaData *)arg1 ;
-(NSString *)applicationVersion;
-(id)toDictionary;
-(id)JSONRepresentation;
-(NSMeasurementFormatter *)measurementFormatter;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 ;
@end

