/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFColor.h>
@class NSDictionary, NSData;


@protocol SFColor <NSObject>
@property (assign,nonatomic) double redComponent; 
@property (assign,nonatomic) double greenComponent; 
@property (assign,nonatomic) double blueComponent; 
@property (assign,nonatomic) double alphaComponent; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(double)alphaComponent;
-(NSData *)jsonData;
-(void)setRedComponent:(double)arg1;
-(void)setGreenComponent:(double)arg1;
-(void)setBlueComponent:(double)arg1;
-(void)setAlphaComponent:(double)arg1;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	double _redComponent;
	double _greenComponent;
	double _blueComponent;
	double _alphaComponent;

}

@property (assign,nonatomic) double redComponent;                                    //@synthesize redComponent=_redComponent - In the implementation block
@property (assign,nonatomic) double greenComponent;                                  //@synthesize greenComponent=_greenComponent - In the implementation block
@property (assign,nonatomic) double blueComponent;                                   //@synthesize blueComponent=_blueComponent - In the implementation block
@property (assign,nonatomic) double alphaComponent;                                  //@synthesize alphaComponent=_alphaComponent - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)alphaComponent;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setRedComponent:(double)arg1 ;
-(void)setGreenComponent:(double)arg1 ;
-(void)setBlueComponent:(double)arg1 ;
-(void)setAlphaComponent:(double)arg1 ;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(BOOL)hasRedComponent;
-(BOOL)hasGreenComponent;
-(BOOL)hasBlueComponent;
-(BOOL)hasAlphaComponent;
@end

