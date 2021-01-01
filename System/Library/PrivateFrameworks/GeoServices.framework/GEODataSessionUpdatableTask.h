/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSError;


@protocol GEODataSessionUpdatableTask <NSObject>
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) id<NSObject> parsedResponse; 
@required
-(NSError *)error;
-(void)setError:(id)arg1;
-(id<NSObject>)parsedResponse;
-(void)setParsedResponse:(id)arg1;

@end

