/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@protocol MTEventDataProviderDelegate;
@class NSDictionary, NSArray;

@interface MTEventDataProvider : MTObject {

	id<MTEventDataProviderDelegate> _delegate;
	NSDictionary* _knownFieldMethods;
	NSArray* _additionalData;

}

@property (nonatomic,retain) NSDictionary * knownFieldMethods;                             //@synthesize knownFieldMethods=_knownFieldMethods - In the implementation block
@property (retain) NSArray * additionalData;                                               //@synthesize additionalData=_additionalData - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTEventDataProviderDelegate>)delegate;
-(void)setDelegate:(id<MTEventDataProviderDelegate>)arg1 ;
-(id)knownFields;
-(void)addFields:(id)arg1 ;
-(NSArray *)additionalData;
-(void)setAdditionalData:(NSArray *)arg1 ;
-(id)knownFieldMethodsForKnownFields:(id)arg1 ;
-(SEL)knownFieldAccessorForFieldName:(id)arg1 ;
-(NSDictionary *)knownFieldMethods;
-(void)addFieldsWithDictionary:(id)arg1 ;
-(void)addFieldsWithPromise:(id)arg1 ;
-(void)addFieldsWithBlock:(/*^block*/id)arg1 ;
-(id)flattenAdditionalData;
-(id)processMetricsData:(id)arg1 performanceData:(id)arg2 ;
-(void)setKnownFieldMethods:(NSDictionary *)arg1 ;
@end
