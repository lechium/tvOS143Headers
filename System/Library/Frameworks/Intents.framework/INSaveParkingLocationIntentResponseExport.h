/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CLPlacemark, NSString;


@protocol INSaveParkingLocationIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) CLPlacemark * parkingLocation; 
@property (nonatomic,copy) NSString * parkingNote; 
@required
-(long long)code;
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(id)arg1;
-(NSString *)parkingNote;
-(void)setParkingNote:(id)arg1;

@end

