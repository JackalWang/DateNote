//
//  SqlClient.h
//  DateNote
//
//  Created by Jackal Wang on 2015/7/15.
//  Copyright (c) 2015年 EC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SqlClient : NSObject

-(void)initDataBase;
-(void)initTempData;
-(void)resetData;

-(void)insertOneDayEvent:(NSString *)startTime :(NSString *)title :(NSString *)description;

//templateList
-(NSMutableArray *)getTemplateList;
-(NSMutableArray *)getTemplateListByID:(NSString *)t_id;

//templateEventList
-(NSMutableArray *)getTemplateEventListByTID:(NSString *)t_id;

//myEvent
-(NSMutableArray *)getMyEvent:(NSString *)time :(NSInteger)count :(NSInteger)pg :(NSString *)mt_id;
-(NSMutableArray *)getMyPastEvent:(NSString *)time :(NSInteger)count :(NSInteger)pg :(NSString *)mt_id;
-(NSMutableArray *)getMyEventByDay:(NSString *)time;
+(NSMutableArray *)getMyEventFrom:(NSDate *)startTime to:(NSDate *)endTime;
-(void) deleteMyEventByMyEventID:(NSString *)me_id;
-(void) deleteMyEventByMyTemplateID:(NSString *)mt_id;
-(void) deleteMyEventByRecycleID:(NSString *)r_id;


//myTemplate
-(NSMutableArray *)getMyTemplate;

@end
